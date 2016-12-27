using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

	public GameObject[] hazards;
	public Vector3 spawnValues;
	public int hazardCount;

	public float spawnWait;
	public float startWait;
	public float waveWait;

	public GUIText scoreText;
	private int score;

	public GUIText restartText;
	public GUIText gameOverText;

	private bool gameOver;
	private bool restart;

	// Use this for initialization
	void Start ()
	{
		score = 0;
		gameOver = false;
		restart = false;
		restartText.text = "";
		gameOverText.text = "";
		updateScore ();
		StartCoroutine (spawnWaves() );
	}

	void Update() {
		if (restart) {
			if (Input.GetKeyDown (KeyCode.R)) {
				Application.LoadLevel (Application.loadedLevel);
			}
		}
	}

	IEnumerator spawnWaves()
	{
		yield return new WaitForSeconds (startWait);
		while (true)
		{
			for (int i = 0; i < hazardCount; i++)
			{
				GameObject hazard = hazards [Random.Range (0, hazards.Length)];
				Vector3 spawnPosition = new Vector3 (Random.Range (-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
				Quaternion spawnRotation = Quaternion.identity;
				Instantiate (hazard, spawnPosition, spawnRotation);
				yield return new WaitForSeconds (spawnWait);
			}
			yield return new WaitForSeconds (waveWait);

			if (gameOver == true) {
				restartText.text = "Press 'R' to restart";
				restart = true;
				break;
			}
		}
	}

	void updateScore() {
		scoreText.text = "Score: " + score;
	}

	public void GameOver () {
		gameOverText.text = "Game Over";
		gameOver = true;
	}

	public void AddScore (int newScoreValue) {
		score += newScoreValue;
		updateScore ();
	}
}
