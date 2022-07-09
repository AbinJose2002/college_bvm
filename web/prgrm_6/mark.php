<?php
    $sname=$_POST['sname'];
    $sid=$_POST['id'];
    $sub1=$_POST["english"];
    $sub2=$_POST["hindi"];
    $sub3=$_POST["chemistry"];
    $sub4=$_POST["physics"];
    $sub5=$_POST["computer"];
    $total=$sub1+$sub2+$sub3+$sub4+$sub5;
    $percent=($total/500)*100;
    if($percent>90){
        $grade = "A";
    }else if($percent>80){
        $grade = "B";
    }else if($percent>70){
        $grade = "C";
    }else{
        $grade = "D";
    }
    echo "<div align=center>
    <h1>Student Details<br></h1>
    <table cellspacing=15>
    <tr>
        <th>Name of student</td>
        <td>:   $sname</td>
    </tr>
    <tr>
        <th>Student ID</td>
        <td>:   $sid</td>
    </tr>
    <tr>
        <th colspan=3><h2><br>Mark of student<br></h2></th>
    </tr>
    <tr>
        <th><b>Subject</b></th>
        <th><b>Marks</b></th>
        <th><b>Total Marks</b></th>
    </tr>
    <tr>
        <th>Engish</th>
        <td align=right>$sub1</td>
        <td align=right>100</td>
    </tr>
    <tr>
        <th>Hindi</th>
        <td align=right>$sub2</td>
        <td align=right>100</td>
    </tr>
    <tr>
        <th>Chemistry</th>
        <td align=right>$sub3</td>
        <td align=right>100</td>
    </tr>
    <tr>
        <th>Physics</th>
        <td align=right>$sub4</td>
        <td align=right>100</td>
    </tr>
    <tr>
        <th>Computer Science</th>
        <td align=right>$sub5</td>
        <td align=right>100</td>
    </tr>
    <tr>
        <th>Total Marks Awarded</th>
        <td align=right>$total</td>
        <td align=right>500</td>
    </tr>
    <tr>
        <th>Percantage</th>
        <td align = center colspan=2>$percent%</td>
    </tr>
    <tr>
        <th>Grade Awarded</th>
        <td colspan=2 align=center>$grade</td>
    </tr>
    </table>
    </div>";
?>