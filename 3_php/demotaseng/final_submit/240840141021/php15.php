<?php

function nameLength(...$arr){
    $box=[];
    array_push($box,...$arr);

    $sbox=[];
    for ($i=1;$i<count($box);$i++){
          if (strlen($box[$i])>=4){
              array_push($sbox,$box[$i]);
        }
    }
    echo "The names with more than 4 characters are: <br>";
    foreach($sbox as $k){
        echo "$k ";
    } 

}

nameLength("Joy","Meena","Anne","Xi","Veena");

?>