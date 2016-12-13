var CarCam : GameObject;
var ThePlayer : GameObject;
var ExitTrigger : GameObject; 
var TheCar : GameObject; 
var TriggerCheck : int; 

function OnTriggerEnter (col : Collider) {
	TriggerCheck = 1;
}

function OnTriggerExit (col : Collider) {
	TriggerCheck = 0;
}

function Update () {
	if (TriggerCheck == 1){
		if (Input.GetButtonDown("Action")) {
		CarCam.SetActive(true);
		ThePlayer.SetActive(false);
		TheCar.GetComponent("CarController").enabled = true;
		TheCar.GetComponent("CarUserControl").enabled = true; 
		ExitTrigger.SetActive(true);
		}
	}
}