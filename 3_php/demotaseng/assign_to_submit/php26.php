<?php

$fileptr = fopen("emp.txt","r");
$arr=[];
while (!feof($fileptr)) {
    array_push($arr,explode(":",fgets($fileptr)));
}


$total=0;
echo "Name ----- Salary <br>";
echo "-------------------------------<br>";
for($i=0; $i<count($arr); $i++){
    echo $arr[$i][1]." -----> ".$arr[$i][3]."<br>";

    $total += $arr[$i][3];
}
echo "--------------------------------<br>";
echo "Total sum of salary of all employees is $total";
close($fileptr);
?>