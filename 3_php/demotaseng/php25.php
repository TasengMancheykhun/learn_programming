<?php
$arr = ["ram", "shaam", "anita", "deepti", "dheeraj", "natasha"];

$file="names.txt";
$fileptr = fopen($file,"w");
foreach($arr as $i){
    fwrite($fileptr,"$i|");
}

?>