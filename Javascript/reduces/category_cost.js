var n = [
    { category: 'A', cost: 10 },
    { category: 'B', cost: 20 },
    { category: 'A', cost: 30 },
    { category: 'C', cost: 15 },
    { category: 'c', cost: 20 }
  ];

total=n.reduce((acc,e) => {
    var {category,cost}=e

    if(!acc[category])
         acc[category]=cost;
    else
        acc[category]+=cost;

    
    return acc
        
},{})

console.log(total)

