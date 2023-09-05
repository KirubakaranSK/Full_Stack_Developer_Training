var n=['kiruba','sham','mohan','bala','sathish']

m=n.reduce((acc,b) => acc= acc.length<b.length ? b:acc)

console.log(m)