<?php
// Função para retornar o conteúdo baseado no cookie
function getConteudo() {
    if (isset($_COOKIE["idiomaperso"])) {

        $idiomaSelecionado = $_COOKIE["idiomaperso"];

        if ($idiomaSelecionado == "brasil") {
            return "A XXX  INDÚSTRIA DE MÁQUINAS LTDA, foi fundada em 1970, e tornou-se o 
mais importante e tradicional fabricante de máquinas ensacadeiras no Brasil. ";
        } elseif ($idiomaSelecionado == "inglaterra") {
            return "The XXX  INDÚSTRIA DE MÁQUINAS LTDA, was founded on 1970,  and became 
the most important and traditional supplyer of BAGGING MACHINES in Brazil. ";
        } elseif ($idiomaSelecionado == "espanha") {
            return "La XXX INDÚSTRIA DE MÁQUINAS LTDA, fue fundada en 1970, y sé a convertido 
en la más importante y tradicional fabrica de MÁQUINAS ENSACADORAS em 
Brasil.";
        }elseif ($idiomaSelecionado == "exit") {
            setcookie("idiomaperso", "", time() -259200);
        } else {
            return "Invalid language selection";
        }
    } else {
        return "Language not selected";
    }
}
    $conteudo2 = getConteudo();
    $arquivo=fopen("C:\\xampp\\htdocs\\trabahophp\\conteudo.txt", "w"); 
    fwrite($arquivo, $conteudo2); 
    $ler = file_get_contents ("C:\\xampp\\htdocs\\trabahophp\\conteudo.txt", "r"); 
    fclose ($arquivo); 
?>