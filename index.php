<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <?php
       include "idioma.inc";
       $conteudo = getConteudo();
    ?>
    <title>Idiomas</title>
    <link rel="stylesheet" href="style.css">
</head>
<body style="background-color: greenyellow;">
    <div id="titulo">
        <h2>Bem vindo ao site Desing em foco</h2>
        <h4> escolha o idioma</h4>
    </div>
    <div class="idiomas">
        <table id="imgtd">
            <tr>
            <td>
                <a href="idioma.php?id=brasil"><img class="img" src="imgs/brasil.jfif" ></a>
                <a href="idioma.php?id=espanha"><img class="img" src="imgs/espanha.jfif"></a>
                <a href="idioma.php?id=inglaterra"><img class="img" src="imgs/inglaterra.jfif"></a>
            </td>
            </tr>
        </table>
    </div>
    <div><h1><?php echo $conteudo; ?></h1></div>
    <div id="idioma">
    <a href="idioma.php?id=exit">Selecione outra lingua</a>
    </div>
</body>
</html>