let from: option('a) => option('a);
let map: ('a => 'b) => option('a) => option('b);
let filter: ('a => bool) => option('a) => option('a);
let flatMap: ('a => option('b)) => option('a) => option('b);

let defaultIfEmpty: 'a => option('a) => option('a);
let getOrElse: 'a => option('a) => 'a;
let isPresent: option('a) => bool;
let ifPresent: ('a => unit) => option('a) => unit;
let equals: option('a) => option('a) => bool;
let cmp: option('a) => option('b) => ('a => 'b => bool) => bool;