var n=[
    {name:"sham",age:21,date:'1-6-2001'},
    {name:"bala",age:22,date:'11-2-2002'},
    {name:"mohan",age:20,date:'3-9-2003'},
    {name:'kiruba',age:21,date:'22-3-2002'}
]

const startDate = new Date('1-1-2001');
const endDate = new Date('31-12-2002');

m=n.filter( e=> { 
    date=Date(e.date)
    return date<endDate && date>startDate
})

console.log(m)