var n=['kiruba','bala','sham','sham','mohan','bala']


m=n.reduce( (a,b)  => {
    a[b]= a[b] ? a[b]+1 : 1;

    return a
},{})

console.log(m)
