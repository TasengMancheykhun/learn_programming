<?php

$arr =[1,2,3,4,5];

$sum=0;
foreach($arr as $i)
    $sum += $i;
/*
echo $sum."<br>";
echo count($arr);
*/
echo "average is: ".$sum/count($arr)."<br>";





function evenElements($a){
    $sum=0;
    foreach($a as $i){
        if ( $i%2==0 ){
            echo $i."<br>";
            $sum += $i;
            #echo"$sumP";
        }
    }
    echo "Sum of even elements is: ".$sum."<br>"; 
}

$arrt = [1,2,3,4,5];
evenElements($arrt);





?>