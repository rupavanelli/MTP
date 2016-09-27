function c = comb(a,n)
if n == 0
    c = 1;
else
    disp(a/n);
    c = a/n*comb(a-1,n-1);
end