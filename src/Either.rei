type either('a, 'b);

let lmap: ('a => 'c) => either('a, 'b) => either('c, 'b);
let rmap: ('b => 'c) => either('a, 'b) => either('a, 'c);
let bimap: ('a => 'c) => ('b => 'd) => either('a, 'b) => either('c, 'd);

let flip: either('a, 'b) => either('b, 'a);

let leftOrDefault: 'a => either('a, 'b) => either('a, 'b);
let rightOrDefault: 'b => either('a, 'b) => either('a, 'b);

let getLeftOrDefault: 'a => either('a, 'b) => 'a;
let getRightOrDefault: 'b => either('a, 'b) => 'b;

let isLeft: either('a, 'b) => bool;
let isRight: either('a, 'b) => bool;