min3 x y z = if (((y==z) ||(z>y)) && ((x>y) || (x==y))) then y else if (((y==z) ||(y>z)) && ((x>z) || (z==x))) then z else if (((x==z) ||(z>x)) && ((y>x) || (x==y))) then x else x
