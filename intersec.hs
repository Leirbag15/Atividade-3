intersec [] y= []
intersec (x:xs) y= if (elem x y ) then x:intersec xs y else intersec xs y
