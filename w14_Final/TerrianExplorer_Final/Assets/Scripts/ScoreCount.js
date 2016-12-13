//This code belongs to Jimmy Vegas
static 	var gscore : int = 0;

function OnGUI(){
	GUI.Label (Rect (10, 10, 100, 20), ("Score: " + gscore));
}

//static var currentScore : int = 0;
//
//var offsetY : float = 40;
//var sizeX : float = 100; 
//var sizeY : float = 40; 
//
//function OnGUI () {
//	GUI.Box (new Rect (Screen.width/2, offsetY, sizeX, sizeY), "Score"); 
//	}