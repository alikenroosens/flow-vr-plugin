### Flow VR

Flow VR is a plugin for Unreal Engine 5 designed to reduce the effects of **cybersickness** in virtual reality environments.

Developed as part of a master’s thesis, it integrates **perceptual modulation techniques** inspired by both academic research and industry practices to improve user comfort while maintaining immersion.

The system identifies an area of minimal optical flow ("flow region") and applies **dynamic visual effects** such as halo reduction, peripheral distortion, and countervection noise to subtly reduce discomfort.

---

### Key Features

* **Flow Region Estimation:** Lightweight optical flow approximation based on camera motion.
* **Halo Effect:** Reduces saturation and contrast outward from the flow region.
* **Peripheral Distortion:** Decreases perceived motion in VR through peripheral object scaling.
* **Countervection Mask:** Applies visual noise in the opposite direction of motion to disrupt vection subtly.
* **Modular Design:** All effects are optional and configurable by the user.
* **Optimized for Standalone VR:** Designed to run on embedded platforms like Meta Quest.
* **User Settings Widget**: An example of 3D widget to configure the effects.

---

### Installation
1. Install the plugin
  * Copy-paste the complete **Flow VR** folder into the **Plugins** folder of any Unreal Engine 5.4+ project.
  * Restart the editor for the plugin to be listed in **Edit > Plugins**.
  * Make sure Flow VR is enabled.
2. Setup the camera
  * Replace the **Camera** component of the **Player Pawn** by the **FlowCam** component.
  * Replace any references in Blueprint.
3. Setup the user settings
  * In **Edit > Project Settings**, select **FlowUserSettings** as the default **Game User Settings Class**.
4. Enjoy a more comfortable VR experience! 


---

### Research Context

This plugin was created in response to the question:

> *"What concrete tools can developers of virtual experiences use to reduce cybersickness without compromising immersion?"*

Findings suggest that Flow VR reduces **disorientation symptoms** as effectively as standard vignettes, while preserving a stronger **sense of presence**.

**Author:** Ali-Ken Roosens

**Institution:** Haute-Ecole Albert Jacquard (Belgium)

**Year:** 2025

---

### Technical Details

* **Engine:** Unreal Engine 5.4+
* **Platform:** Tested on Meta Quest 3S (Android, Vulkan RHI)
* **Languages:** C++, Blueprint
* **Plugin Structure:** Includes a custom camera component (`FlowCam`) and user settings manager.

---

### License

This project is provided for **academic and non-commercial use only**. Please refer to the included `LICENSE.md` for full terms.
