using UnityEngine;
using System.Collections;

[System.Serializable]
public class Boundary
{
	public float xMin, xMax, zMin, zMax;
}

public class PlayerController : MonoBehaviour {

	private Rigidbody rb;
	public float speed;
	public Boundary boundary;

	public float sideTilt;
	public float frontTilt;

	public GameObject shot;
	public Transform shotSpawn;
	public float fireRate;

	private float nextFire;

	private AudioSource audioSource ;

	// Use this for initialization
	void Start ()
	{
		rb = GetComponent<Rigidbody>();
		audioSource = GetComponent<AudioSource >();
	}

	void Update()
	{

		if (Input.GetButton("Fire1") && Time.time > nextFire) {

			nextFire = Time.time + fireRate;

			Instantiate (shot, shotSpawn.position, shotSpawn.rotation);

			audioSource.Play ();
		}

	}

	// Before each fixed physics step
	void FixedUpdate () 
	{
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		rb.velocity =  movement * speed;

		//rb.AddForce (someVector3Value);

		rb.position = new Vector3
		(
			Mathf.Clamp(rb.position.x,boundary.xMin,boundary.xMax),
			0.0f,
			Mathf.Clamp(rb.position.z,boundary.zMin,boundary.zMax)
		);

		rb.rotation = Quaternion.Euler (rb.velocity.z * frontTilt, 0.0f, rb.velocity.x * -sideTilt);


	}
}
