using UnityEngine;
using System.Collections;

public class weaponController : MonoBehaviour {


	public GameObject shot;
	public Transform shotSpawn;
	public float fireRate;
	public float fireDelay;

	private AudioSource audioSource;

	// Use this for initialization
	void Start () {
		audioSource = GetComponent <AudioSource> ();
		//InvokeRepeating ();
	}

	void Fire() {
		Instantiate (shot, shotSpawn, shotSpawn.rotation);
		audioSource.Play ();
	}
}
