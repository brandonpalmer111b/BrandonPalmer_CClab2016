var CarCam : GameObject;
var ThePlayer : GameObject;
var ExitTrigger : GameObject; 
var TheCar : GameObject; 
var ExitPlace:  GameObject; 

function Update () {
	if (Input.GetButtonDown("Action")) {
		ThePlayer.SetActive(true);
		ThePlayer.transform.position = ExitPlace.transform.position;
		CarCam.SetActive(false); 
		TheCar.GetComponent("CarUserControl").enabled = false; 
		TheCar.GetComponent("CarController").enabled = false;
		ExitTrigger.SetActive(false);
	}
}