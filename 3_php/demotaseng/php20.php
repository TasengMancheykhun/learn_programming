<?php

$s1 = $_POST["str1"];
$s2 = $_POST["str2"];

if (strchr($s1,$s2)==$s2){
    echo "String \"".$s2."\" is available in string \"".$s1."\"<br>";
    echo "Index of \"".$s2."\" in string \"".$s1."\" is ".strpos($s1,$s2)."<br>";
}
elseif (strchr($s2,$s1)==$s1) {
    echo "String \"".$s1."\" is available in string \"".$s2."\"<br>";
    echo "Index of \"".$s1."\" in string \"".$s2."\" is ".strpos($s2,$s1)."<br>";
}


?>
