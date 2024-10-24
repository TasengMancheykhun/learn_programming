<?php
$evenAdd=0;
$oddAdd=0;
$c=2;
for ( $i=1; $i<=100; $i++){
    if($i%2==0){
        $evenAdd=$evenAdd+$i;
    }else{
        $oddAdd=$oddAdd+$i;
    }
}
echo "Even no addition is : ",$evenAdd,"<br>";
echo "Odd no. addition is :",$oddAdd,"<br>";
echo "Difference between Even add and Odd add : ",abs($oddAdd-$evenAdd);
?>