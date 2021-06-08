maior (x:xs)= if null xs then x else if x>(head xs)then maior ([x]++(tail xs))else maior xs
