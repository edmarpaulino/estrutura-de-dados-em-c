# QuickSort ou Ordenação por Troca de Partições
- Ideia básica: Dividir e Conquistar
- Um elemento é escolhido como pivô
- Particionar: os dados são rearranjados
(valores menores do que o pivô são colocados
antes dele e os maiores, depois)
- Recursivamente ordena as 2 partições

## Performance
- Melhor Caso: O(N log N)
- Pior Caso (raro): O(N^2)
- Estável: não altera a ordem de dados iguais
- Desvantagens: como escolher o pivô?