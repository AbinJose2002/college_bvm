<?php
    $num = $_POST['number'];
    $op = $_POST['operation'];
    echo "<h2 align=center>Entered number = $num</h2>";
    if($op=='fact'){
        factorial($num);
    }else if($op=='prime'){
        prime($num);
    }else{
        amstrong($num);
    }
    function factorial($num){
        for($f=1,$i=1;$i<=$num;$i++){
            $f=$f*$i;
        }
        echo "<h4 align=center>Factorial of $num = $f</h4>";
    }
    function prime($num){
        for($p=0,$i=2;$i<=$num/2;$i++){
            if($num%$i==0){
                echo "<h4 align=center>$num is not a prime number</h4>";
                return;
            }
        }
        echo "<h4 align=center>$num is a prime number</h4>";
    }
    function amstrong($num){
        $n = $num;
        $sum = 0;
        while($n!=0){
            $d = $n%10;
            $sum = $sum+($d*$d*$d);
            $n/=10;
        }
        if($sum==$num){
            echo "<h4 align=center>$num is a amstrong number</h4>";
        }else{
            echo "<h4 align=center>$num is not a amstrong number</h4>";
        }
    }
?>