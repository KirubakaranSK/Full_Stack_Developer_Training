var n= [
    { name: 'Alice', email: 'alice@example.com' },
    { name: 'Bob', email: 'bob@example.com' },
    { name: 'Charlie', email: 'charlie@gmail.com' },
    { name: 'Aline', email: 'aline@example.com' },
    { name: 'harish', email: 'harish@example.com' },
    { name: 'puja', email: 'puja@gmail.com' },
  ];

d=function(e){
    domain='gmail.com'
    return e.email.includes(domain)
}

m=n.filter(d)

console.log(m)