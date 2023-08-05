function memoize(fn) {
    let old = [];
    return function(...args) {
        let key = args.join("-")
        if (key in old)
            return old[key];
        return old[key] = fn(...args);
    }
}

let callCount = 0;
const memoizedFn = memoize(function (a, b) {
    callCount += 1;
    return a + b;
})
console.log(memoizedFn(2, 3)); // 5
console.log(memoizedFn(5, 3)); // 5
console.log(memoizedFn(2, 3));
console.log(callCount) // 2 
// console.log(memoizedFn(5, 3));
// console.log(callCount) // 3
