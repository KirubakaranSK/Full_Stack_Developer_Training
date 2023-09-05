var n=[
    {name:'kiruba',salary:15000},
    {name:'keerthi',salary:20000},
    {name:'harish',salary:20000},
    {name:'bala',salary:22000}
]

sal=n.reduce((a,b) => a+b.salary,0)

console.log(sal)