//I am using this code for a tutorial on Lynda.com
//Called Javascript for Web Designers
//Also this code is being using from Google Maps API


var gMapAPIKey = "AIzaSyB73XGzU4PYgJsQyJfSq3MAPIuU4YnbmMU";
alert("hey man");

      // This is taking my div id and is giving it a center function
      // along with a lat and lng of the location and zoom
      var map;
      var parsons = {lat: 40.7353003, lng: -73.9945928};
      var universityCenter = {lat:  40.7354188, lng: -73.9936312};
      // var centerpoint = {lat:  , lng: };
      

      function initMap() {
      	
      	//This is the zoom and center point for the map
      	map = new google.maps.Map(document.getElementById('parsons-map'), {
      		'center' : parsons,
      		'zoom' : 18,
      		mapTypeId:google.maps.MapTypeId.HYBRID
      	}); 

      	//This is the var for the popup window
      	var lightbox = 'Popup';
      	lightbox += '66 5th Ave, New York, NY 10011<br>';
      	lightbox += 'Manhattan, Ny';

            //This is the var for the popup window
            var lightbox2 = 'popup2';
            lightbox += '63 5th Ave, New York, NY 10003<br>';
            lightbox += 'Manhattan, Ny';





      	//This is the information box
      	//used to retrieve information
      	var infowindow = new google.maps.InfoWindow({
      		content: lightbox,
      		maxWidth: 200
      	});
            var infowindow = new google.maps.InfoWindow({
                  content: lightbox2,
                  maxWidth: 200
            });

      	//This is the marker on the map
      	var marker = new google.maps.Marker({
      		'position' : parsons,
      		'map' : map,
      		'title' : 'Hey, This is Parsons School for Design!'
      	});
            var marker = new google.maps.Marker({
                  'position' : universityCenter ,
                  'map' : map,
                  'title' : 'Hey, This is Parsons School for Design!'
            });



      
      //This is the function to see the box window
      	marker.addListener('click', function() {
          infowindow.open(map, markerparsons);
        });
            marker.addListener('click', function() {
          infowindow.open(map, markeruniversity);
        });
      }
