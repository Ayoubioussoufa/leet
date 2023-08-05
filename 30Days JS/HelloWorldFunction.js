const createCounter = (init) => {
    return ({
        original: init,
        increment:  () => ++init,
        decrement:  () => --init,
        reset: () => this.original
    });
}

const counter = createCounter(1);

console.log(counter.original);
// counter.increment();
console.log(counter.decrement());
console.log(counter.increment());
console.log(counter.increment());
console.log(counter.reset());

// function createCounter(x) {
//     return {
//         inc:()=> ++x,
//         dec:()=> --x,
//         not:()=> x
//     }
// }
// const va = createCounter(5);
// console.log(va.inc())
// console.log(va.not())
// console.log(va.dec())

// var createCounter = function(init) {
//     init: init
//     increment = function() {
//         return ++init;
//     },
//     reset = function() {
//         return this.init;
//     },
//     decrement = function() {
//         return --init;
//     }
// };


// const counter = createCounter(5)
// console.log(counter.increment()); // 6
// console.log(counter.reset()); // 5
// console.log(counter.decrement()); // 4
