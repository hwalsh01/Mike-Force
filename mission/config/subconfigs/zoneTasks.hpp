// controls zone tasks dependencies
// successful: task A -> task B -> task C
// failure: task A -> task B -> task C -> (failure) -> task C -> (failure) -> task C
first_task = "prepare_zone";
last_task = "defend_counterattack";

class prepare_zone {
	success = "capture_zone";
	failure = "prepare_zone";
	init = "prepare_zone";
};

class capture_zone {
	success = "defend_counterattack";
	failure = "prepare_zone";
	init = "prepare_zone";
};

class defend_counterattack {
	// success doesn't matter here as it's the last one
	// but provide a value to avoid errors
	success = "n/a";
	failure = "defend_counterattack";
	init = "defend_counterattack";
};
