using UnityEngine;
using System.Collections;

public class bgScroller : MonoBehaviour {

	public float startScrollSpeed;
	public float maxScrollSpeed;
	public float tileSizeZ;
	private Vector3 startPosition;
	private float scrollSpeed;

	// Use this for initialization
	void Start () {
		startPosition = transform.position;
		scrollSpeed = startScrollSpeed;
	}
	
	// Update is called once per frame
	void Update () {
		if (scrollSpeed > maxScrollSpeed) {
			scrollSpeed -= 0.0001f;
		}
		float newPosition = Mathf.Repeat (Time.time * scrollSpeed, tileSizeZ);
		transform.position = startPosition + Vector3.forward * newPosition;
	}
}
