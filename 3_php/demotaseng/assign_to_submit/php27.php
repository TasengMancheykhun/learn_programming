<?php

function increm($file, $startno){
    $count=0;
    while (!feof($file)){
      echo $count." ".fgets($file)."<br>";
      $count++;
    }
}

$fileptr = fopen("simpletext.txt","r");
increm($fileptr,$str);

?>