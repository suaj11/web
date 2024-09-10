<?php
$username = $_POST['us'];
$pass = $_POST['pas'];

//database connection

$conn = new mysqli('localhost','root', '' ,'tables');
if($conn->connect_error){
    die('Connection Failed : '.$conn->connect_error);
}
else{
   $stmt = $conn->prepare("insert into login(username , pass ) values (? , ? )");
   $stmt->bind_param("ss" , $username , $pass );
   $stmt->execute();
   echo "request sent successfully....";
   $stmt->close();
   $conn->close();
   //header("location: http://localhost:3000/myweb.html");
}
?>