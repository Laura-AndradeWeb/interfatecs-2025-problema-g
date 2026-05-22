# Problema G - Base Inimiga
**Maratona InterFatecs 2025 - 1ª Fase**

## Descrição
Dois guardas patrulham corredores com ciclos diferentes. O programa
determina em quantos minutos ambos estarão simultaneamente no mesmo
ponto de vigilância.

## Lógica
Calcula o próximo instante de cada guarda e avança o menor deles
até que os dois se encontrem:
```
retornoS = ys - ds  (minutos para o guarda 1 chegar ao posto)
retornoM = ym - dm  (minutos para o guarda 2 chegar ao posto)

enquanto retornoS != retornoM:
    se retornoS < retornoM: retornoS += ys
    senão: retornoM += ym

resposta = retornoS
```

## Entrada
```
ds ys  → minutos desde a última passagem e ciclo do guarda 1
dm ym  → minutos desde a última passagem e ciclo do guarda 2
```

## Saída
Menor número de minutos até a sincronização dos dois guardas

## Exemplo 1
**Entrada:**
```
3 10
1 2
```
**Saída:**
```
7
```

## Compilar e executar
```
gcc ProblemaG.cpp -o ProblemaG
./ProblemaG < entrada.txt
```
