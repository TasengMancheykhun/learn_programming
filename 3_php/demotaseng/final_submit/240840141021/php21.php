<?php

$fah = $_POST["temp"];

$cel = ($fah-32)*5/9;
echo "Temperature ".$fah." Fahrenheit is equal to ".round($cel,3)." degree celcius <br>"; 
?>