a=1;
b=1;
c=1;
n=10;
fprintf('%d ',c);
for i=1:n
   fprintf('%d ',c);
   c=a+b;
   a=b;
   b=c;
end