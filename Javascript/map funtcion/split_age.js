var n =[
    {name:'kiruba',age:21},
    {name:'sham',age:22},
    {name:'gokul',age:21},
    {name:'raja',age:22}
]

 c = n.reduce((acc, e) => {
    const { name, age } = e;

    if (!acc[age]) {
        acc[age] = [];
    }

    acc[age].push({ name, age });

    return acc;
}, {});

console.log(c);