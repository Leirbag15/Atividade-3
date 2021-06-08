somaImpares []=0
somaImpares (x:xs) = if (odd x) then x+somaImpares xs else somaImpares xs
