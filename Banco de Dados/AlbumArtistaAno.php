<!DOCTYPE html>
<html>
<title>W3.CSS Template</title>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
<body>

<!-- Navbar (sit on top) -->
<div class="w3-top">
  <div class="w3-bar w3-white w3-wide w3-padding w3-card">
    <a href="#home" class="w3-bar-item w3-button"><b>UFMG</b> - Trabalho Banco de dados</a>
  </div>
</div>

<!-- Header -->
<header class="w3-display-container w3-content w3-wide" style="max-width:1500px;" id="home">
  <img class="w3-image" src="/w3images/architect.jpg" alt="Architecture" width="1500" height="800">
  <div class="w3-display-middle w3-margin-top w3-center">
    <h1 class="w3-xxlarge w3-text-white"><span class="w3-padding w3-black w3-opacity-min"><b>UFMG</b></span> <span class="w3-hide-small w3-text-light-grey">Trabalho Banco de dados</span></h1>
  </div>
</header>

<div class="w3-container w3-padding-32">

<?php
//Criando tabela e cabeçalho de dados:
echo "<table border=1>";
echo "<tr>";
echo "<th>label_al</th>";
echo "<th>title</th>";
echo "<th>year</th>";
echo "<th>year</th>";
echo "<th>to_ed</th>";
echo "<th>label_ed</th>";
echo "</tr>";

// Conectando ao banco de dados;
$strcon = mysqli_connect('localhost','admin','S6jTjS8Q', 'musica') or die('Erro ao conectar ao banco de dados');
$sql = "SELECT * FROM Albums A INNER JOIN Edges E WHERE A.id_al = E.from_ed;";
$resultado = mysqli_query($strcon,$sql) or die ("Erro ao tentar cadastrar registro");

//Obtendo os dados por meio de um loop while
while ($registro = mysqli_fetch_array($resultado))
{
  $col1 = $registro['label_al'];
  $col2 = $registro['title'];
  $col3 = $registro['year'];
  $col4 = $registro['to_ed'];
  $col5 = $registro['label_ed'];
  echo "<tr>";
  echo "<td>".$col1."</td>";
  echo "<td>".$col2."</td>";
  echo "<td>".$col3."</td>";
  echo "<td>".$col3."</td>";
  echo "<td>".$col4."</td>";
  echo "<td>".$col5."</td>";
  echo "</tr>";
}
mysqli_close($strcon);
echo "</table>";
?>

</div>
<!-- Footer -->
<footer class="w3-center w3-black w3-padding-16">
  <p>Flávia Emery Pereira Sudário - Matrícula 2017435893</a></p>
</footer>

</body>
</html>