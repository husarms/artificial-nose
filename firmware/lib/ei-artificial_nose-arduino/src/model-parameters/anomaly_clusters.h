/* Generated by Edge Impulse
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 0.04551110983695224, 0.05727639399840249, 0.03929952125950404, 0.003137397579751108 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 0.6630283318400978, 0.19584414335697164, 0.10247157045182996, 0.057827180211592645 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { -0.6804560422897339, -0.16861672699451447, -0.6667441725730896, -0.5936599373817444 }, 0.08712202791282625 }
, { { 0.4245382249355316, -1.443540334701538, -0.42708131670951843, -0.46337172389030457 }, 0.30298575510534015 }
, { { -0.47092077136039734, 0.8332584500312805, -0.005768926814198494, 1.089865803718567 }, 0.5366194211723142 }
, { { -1.140268087387085, -0.06375822424888611, -0.8684085607528687, -0.8929149508476257 }, 0.07750140207603622 }
, { { 0.37349674105644226, 1.5384838581085205, 1.1100322008132935, 1.9383107423782349 }, 0.40701701520465533 }
, { { 1.4521734714508057, -0.6991337537765503, 0.7515193819999695, 0.03449174016714096 }, 0.5718984041412571 }
, { { 0.7249571084976196, 1.9001047611236572, 1.5505539178848267, 2.0856361389160156 }, 0.342892563560786 }
, { { 1.0765138864517212, 2.3592374324798584, 1.7308100461959839, 1.6141862869262695 }, 0.3452917889168539 }
, { { 0.8832881450653076, 2.2251086235046387, 1.3343998193740845, 1.0937222242355347 }, 0.3489825908033989 }
, { { 1.0523226261138916, 2.2769696712493896, 1.8957592248916626, 2.1037588119506836 }, 0.303320179902108 }
, { { 1.033031940460205, -1.0117130279541016, 0.17952418327331543, -0.23969930410385132 }, 0.4055789280191798 }
, { { 2.172748565673828, -0.14959245920181274, 2.167315721511841, 1.5020685195922852 }, 0.36231914115027647 }
, { { 1.1790237426757812, -1.040177345275879, 0.806209146976471, 0.8226668238639832 }, 0.43192467156298686 }
, { { -0.3136661946773529, -0.31243613362312317, -0.49543753266334534, -0.434918612241745 }, 0.10505544414162604 }
, { { 1.6916486024856567, -0.6492274403572083, 1.1997027397155762, 0.9959604144096375 }, 0.412473031250962 }
, { { -0.032486267387866974, 1.1765990257263184, 0.5772252082824707, 1.683185338973999 }, 0.47602207402049845 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_