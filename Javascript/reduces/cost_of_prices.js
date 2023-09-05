s = [
    { quantity: 3, price: 10 },
    { quantity: 2, price: 5 },
    { quantity: 4, price: 8 }
  ];
  
m=s.reduce((a,b) => a+(b.quantity*b.price),0)


console.log(m)
  