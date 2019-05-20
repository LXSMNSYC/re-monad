type either('a, 'b) =
  | Left('a)
  | Right('b)
;

let lmap = (mapper, either) =>
  switch (either) {
    | Left(item) => Left(mapper(item))
    | Right(item) => Right(item)
  }
;

let rmap = (mapper, either) =>
  switch (either) {
    | Left(item) => Left(item)
    | Right(item) => Right(mapper(item))
  }
;

let bimap = (l, r, either) => 
  switch (either) {
    | Left(item) => Left(l(item))
    | Right(item) => Right(r(item))
  }
;

let flip = either =>
  switch (either) {
    | Left(item) => Right(item)
    | Right(item) => Left(item)
  }
;

let leftOrDefault = (default, either) =>
  switch (either) {
    | Left(item) => Left(item)
    | Right(_) => Left(default)
  }
;

let rightOrDefault = (default, either) =>
  switch (either) {
    | Left(_) => Right(default)
    | Right(item) => Right(item)
  }
;

let getLeftOrDefault = (default, either) =>
  switch (either) {
    | Left(item) => item
    | Right(_) => default
  }
;

let getRightOrDefault = (default, either) =>
  switch (either) {
    | Left(_) => default
    | Right(item) => item
  }
;

let isLeft = either =>
  switch (either) {
    | Left(_) => true
    | Right(_) => false 
  }
;

let isRight = either =>
  switch (either) {
    | Left(_) => false
    | Right(_) => false 
  }
;