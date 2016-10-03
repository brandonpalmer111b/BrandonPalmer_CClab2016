$(document).ready(function() {
    $("#button").click(function() {
        var toAdd = $('input[name=checkListItem]').val();
       
        $(".list").append('<div class ="item">' + toAdd + '</div>')
    });
    
    $(document).on('click', '.item', function() {
       $(this).remove(); 
    });

    $('div').mouseenter(function() {
    	$('div').fadeTo('slow', 0.5);
        console.log("mousehasentered")
    });


    $('div').mouseleave(function() {
    	$('div').fadeTo('fast', 1);
    });

 	$('#dog').hide(function() { 
 		$('div').click(function() {
 			$('#dog').fadeIn('fast');
 		})
 	});
});

//This framework has been used and modified from Codeacademy


