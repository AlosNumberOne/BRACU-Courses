মোডুলো অপারেটর (Modulo Operator ‘%’) ব্যবহার করে ভাগশেষ বের করার মাধ্যমেঃ
if(num%2 == 0)
    printf("even");
else
    printf("odd");
Division operator ‘/’ দিয়ে ভাগফল বের করার মাধ্যমেঃ
if((num/2) * 2 == num)
    printf("even");
else
    printf("odd");
বিটওয়াজ এন্ড (Bitwise AND operator ‘&’) ব্যবহার করেঃ
if((num & 1) == 0)
    printf("even");
else
    printf("odd");
 
//আমি আরেকটু শর্টকাট করি নিচের মত করে
 
if(num & 1)
    printf("odd");
else
    printf("even);
লেফট শিফট ও রাইট শিফট (Left shift ‘<<‘ and Right shift ‘>>’ operator) বিটওয়াইজ অপারেশনের মাধ্যমেঃ
int res = (num >> 1) << 1; // right shift by 1 bit and then left shift by 1 bit
 
if(res == num)
    printf("even");
else
    printf("odd");
 
 
//প্রথম লাইনটাও কমাতে চাইলে এভাবে লেখা যায় 
 
if(((num >> 1) << 1) == num)
    printf("even");
else
    printf("odd");
XOR ব্যবহার করেঃ
if ( (num ^ 1) < num)
    printf("odd");
else
    printf("even");
