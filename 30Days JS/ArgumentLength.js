var argumentsLength = function(...args) {
    let total = 0;
    args.forEach(arguments => {
        total++;
    });
    return (total)
};

const func = argumentsLength(5,956,6,23,23,32);

console.log(func);