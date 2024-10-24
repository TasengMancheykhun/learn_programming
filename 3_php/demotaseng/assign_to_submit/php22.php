<?php
$p = $_POST["principal"];
$t = $_POST["years"];
$r = $_POST["rate"];

$interest = $p*$r*$t/100;
echo "The simple interest of Rs. ".$p." after ".$t." years at an interest rate of ".$r."% is: Rs. ".$interest."<br>";

?>