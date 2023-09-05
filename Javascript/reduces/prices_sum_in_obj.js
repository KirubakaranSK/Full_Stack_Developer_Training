var n=[
    {name:'pant',price:1000},
    {name:'shirt',price:800},
    {name:'watch',price:2000},
    {name:'chain',price:300},
    {name:'footers',price:700},
    {name:'T-shirt',price:400}
]

m=n.reduce((a,b)=> a+b.price,0)

console.log(m)