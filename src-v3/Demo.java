import iiitb.ess201a7.a7base.*;

// import each of the fleets to be considered in the simulation
import iiitb.ess201a7.r99999.Fleet99999;

public class Demo {

	public static void main(String[] args) {

		Platform pf = new Platform();
		// v3. Instantiates Text-based display. Change this to call any other derived class of Display
		Display disp = new TextDisplay();

		App app = new App(pf, disp);

		Fleet f1 = new Fleet99999("blue");
		pf.addFleet(f1);

		for(int i=0;i<4;i++){
			f1.addCar(30 + i*5);  // add cars, assigning max speed to each car
		}

		// Similarly add other fleets if available. Assign a different colour to each fleet


		// start the app - populate the display and run the simulation
		app.init();

		// This will be replaced by callbacks from Display once the UI is in place

		disp.requestTrip(new Location(10, 10), new Location(200,200));
		disp.requestTrip(new Location(250, 100), new Location(100,300));

	}

}
