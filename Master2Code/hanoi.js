'use strict';

const towerOfHanoi = (disks, source, to, aux) => {
  if(disks > 0) {
    towerOfHanoi(disks - 1, source, aux, to);
    console.log(`Move disk ${disks} from rod ${source} to rod ${to}`);
    towerOfHanoi(disks - 1, aux, to, source);
  }
};

const test = () => {
  towerOfHanoi(4, "A", "B", "C");
}

test();