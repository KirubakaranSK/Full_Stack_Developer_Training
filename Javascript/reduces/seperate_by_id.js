
var n=[
    {id:1,name:'pant',price:1000},
    {id:3,name:'shirt',price:800},
    {id:8,name:'watch',price:2000},
    {id:5,name:'chain',price:300},
    {id:7,name:'footers',price:700},
    {id:9,name:'T-shirt',price:400}
]

m=n.reduce((a,b) => {
        a[b.id]=b
        return a
},{})


console.log(m)
