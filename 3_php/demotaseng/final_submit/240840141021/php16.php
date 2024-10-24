<?php

function evenLen(...$arr){
    $box=[];
    array_push($box,...$arr);

    $sbox=[];
    foreach($box as $word){

	#echo $word."<br>";    
	#echo (strlen($word)%2)."<br>";
	#echo strtolower($word[0])."<br>";

        if (((strlen($word)%2) == 0) && ((strtolower($word[0])) == 'a')){

#		echo $word."<br>"; 
		array_push($sbox,$word);
            }
        
    }

    echo "The words that are even in length and starts with A or a are: <br>";
    foreach($sbox as $k){
        echo "$k, ";
    } 

}


evenLen("Aelo","Aeen","World","aune","Veena");

?>
